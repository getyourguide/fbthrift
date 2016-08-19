package test.fixtures.optionals;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import java.util.*;

import static com.google.common.base.MoreObjects.toStringHelper;

@ThriftStruct("Color")
public final class Color
{
    @ThriftConstructor
    public Color(
        @ThriftField(value=1, name="red", requiredness=Requiredness.NONE) final double red,
        @ThriftField(value=2, name="green", requiredness=Requiredness.NONE) final double green,
        @ThriftField(value=3, name="blue", requiredness=Requiredness.NONE) final double blue,
        @ThriftField(value=4, name="alpha", requiredness=Requiredness.NONE) final double alpha
    ) {
        this.red = red;
        this.green = green;
        this.blue = blue;
        this.alpha = alpha;
    }

    public static class Builder {
        private double red;

        public Builder setRed(double red) {
            this.red = red;
            return this;
        }
        private double green;

        public Builder setGreen(double green) {
            this.green = green;
            return this;
        }
        private double blue;

        public Builder setBlue(double blue) {
            this.blue = blue;
            return this;
        }
        private double alpha;

        public Builder setAlpha(double alpha) {
            this.alpha = alpha;
            return this;
        }

        public Builder() { }
        public Builder(Color other) {
            this.red = other.red;
            this.green = other.green;
            this.blue = other.blue;
            this.alpha = other.alpha;
        }

        public Color build() {
            return new Color (
                this.red,
                this.green,
                this.blue,
                this.alpha
            );
        }
    }

    private final double red;

    @ThriftField(value=1, name="red", requiredness=Requiredness.NONE)
    public double getRed() { return red; }

    private final double green;

    @ThriftField(value=2, name="green", requiredness=Requiredness.NONE)
    public double getGreen() { return green; }

    private final double blue;

    @ThriftField(value=3, name="blue", requiredness=Requiredness.NONE)
    public double getBlue() { return blue; }

    private final double alpha;

    @ThriftField(value=4, name="alpha", requiredness=Requiredness.NONE)
    public double getAlpha() { return alpha; }

    @Override
    public String toString()
    {
        return toStringHelper(this)
            .add("red", red)
            .add("green", green)
            .add("blue", blue)
            .add("alpha", alpha)
            .toString();
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }

        Color other = (Color)o;

        return
            Objects.equals(red, other.red) &&
            Objects.equals(green, other.green) &&
            Objects.equals(blue, other.blue) &&
            Objects.equals(alpha, other.alpha);
    }

    @Override
    public int hashCode() {
        return Arrays.deepHashCode(new Object[] {
            red,
            green,
            blue,
            alpha
        });
    }
}
