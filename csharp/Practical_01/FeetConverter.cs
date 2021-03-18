using System;

namespace DistanceConverter {
  public static class FeetConverter {
    public static readonly double ratio = 0.3048;

    public static double FromMeter(double meter) {
      return meter / ratio;
    }

    public static double ToMeter(double feet) {
      return feet * ratio;
    }
  }
}