package com.filipecanattodev.trace_best_route;

import java.util.ArrayList;
import java.util.List;

import org.junit.Test;

public class BestRouteTracerTest {

	@Test
	public void should_trace_the_best_route() {

		List<Point> locations = new ArrayList<>();
		List<Point> points = null;
		locations.add(new Point(7, 2));
		locations.add(new Point(3, 6));
		locations.add(new Point(4, 7));

		points = new BestRouteTracer().execute(locations, 2);

	}
}
