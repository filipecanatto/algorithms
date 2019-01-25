package com.filipecanattodev.trace_best_route;

import java.util.ArrayList;
import java.util.List;

/**
 * Given a list of coordinates (points in a map), return a list of the best route (a set of locations)
 * from x(0) and y(0).
 *
 */
public class BestRouteTracer {

	public List<Point> execute(List<Point> locations, int deliveries) {

		Point from = new Point(0, 0);
		List<Point> ret = new ArrayList<>();
		for (int i = deliveries; i > 0; i--) {
			from = getNextPoint(from, locations);
			ret.add(from);
		}

		return ret;

	}

	// find the shortest next point
	private Point getNextPoint(Point from, List<Point> points) {
		int shortestPointIndex = 0;
		double distance = -1;

		for (int i = 0; i < points.size(); i++) {

			double distanceCache = getDistance(from, points.get(i));

			// are the same points
			if (distanceCache == 0) {
				continue;
			}

			if (distanceCache < distance || distance == -1) {
				shortestPointIndex = i;
				distance = distanceCache;
			}
		}

		return points.get(shortestPointIndex);

	}

	// calculate the distance between two points
	public double getDistance(Point from, Point to) {
		double legI = (to.x - from.x);
		double legII = (to.y - from.y);

		return Math.sqrt(legI * legI + legII * legII);
	}

}
