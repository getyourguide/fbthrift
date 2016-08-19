package test.fixtures.module0;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import java.util.*;

import static com.google.common.base.MoreObjects.toStringHelper;

@ThriftStruct("Struct")
public final class Struct
{
    @ThriftConstructor
    public Struct(
        @ThriftField(value=1, name="first", requiredness=Requiredness.NONE) final int first,
        @ThriftField(value=2, name="second", requiredness=Requiredness.NONE) final String second
    ) {
        this.first = first;
        this.second = second;
    }

    public static class Builder {
        private int first;

        public Builder setFirst(int first) {
            this.first = first;
            return this;
        }
        private String second;

        public Builder setSecond(String second) {
            this.second = second;
            return this;
        }

        public Builder() { }
        public Builder(Struct other) {
            this.first = other.first;
            this.second = other.second;
        }

        public Struct build() {
            return new Struct (
                this.first,
                this.second
            );
        }
    }

    private final int first;

    @ThriftField(value=1, name="first", requiredness=Requiredness.NONE)
    public int getFirst() { return first; }

    private final String second;

    @ThriftField(value=2, name="second", requiredness=Requiredness.NONE)
    public String getSecond() { return second; }

    @Override
    public String toString()
    {
        return toStringHelper(this)
            .add("first", first)
            .add("second", second)
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

        Struct other = (Struct)o;

        return
            Objects.equals(first, other.first) &&
            Objects.equals(second, other.second);
    }

    @Override
    public int hashCode() {
        return Arrays.deepHashCode(new Object[] {
            first,
            second
        });
    }
}
