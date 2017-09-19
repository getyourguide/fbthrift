/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.basic;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import java.util.*;

import static com.google.common.base.MoreObjects.toStringHelper;

@ThriftStruct("MyStruct")
public final class MyStruct
{
    @ThriftConstructor
    public MyStruct(
        @ThriftField(value=1, name="MyIntField", requiredness=Requiredness.NONE) final long myIntField,
        @ThriftField(value=2, name="MyStringField", requiredness=Requiredness.NONE) final String myStringField,
        @ThriftField(value=3, name="MyDataField", requiredness=Requiredness.NONE) final test.fixtures.basic.MyDataItem myDataField
    ) {
        this.myIntField = myIntField;
        this.myStringField = myStringField;
        this.myDataField = myDataField;
    }

    public static class Builder {
        private long myIntField;

        public Builder setMyIntField(long myIntField) {
            this.myIntField = myIntField;
            return this;
        }
        private String myStringField;

        public Builder setMyStringField(String myStringField) {
            this.myStringField = myStringField;
            return this;
        }
        private test.fixtures.basic.MyDataItem myDataField;

        public Builder setMyDataField(test.fixtures.basic.MyDataItem myDataField) {
            this.myDataField = myDataField;
            return this;
        }

        public Builder() { }
        public Builder(MyStruct other) {
            this.myIntField = other.myIntField;
            this.myStringField = other.myStringField;
            this.myDataField = other.myDataField;
        }

        public MyStruct build() {
            return new MyStruct (
                this.myIntField,
                this.myStringField,
                this.myDataField
            );
        }
    }

    private final long myIntField;

    @ThriftField(value=1, name="MyIntField", requiredness=Requiredness.NONE)
    public long getMyIntField() { return myIntField; }

    private final String myStringField;

    @ThriftField(value=2, name="MyStringField", requiredness=Requiredness.NONE)
    public String getMyStringField() { return myStringField; }

    private final test.fixtures.basic.MyDataItem myDataField;

    @ThriftField(value=3, name="MyDataField", requiredness=Requiredness.NONE)
    public test.fixtures.basic.MyDataItem getMyDataField() { return myDataField; }

    @Override
    public String toString()
    {
        return toStringHelper(this)
            .add("myIntField", myIntField)
            .add("myStringField", myStringField)
            .add("myDataField", myDataField)
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

        MyStruct other = (MyStruct)o;

        return
            Objects.equals(myIntField, other.myIntField) &&
            Objects.equals(myStringField, other.myStringField) &&
            Objects.equals(myDataField, other.myDataField);
    }

    @Override
    public int hashCode() {
        return Arrays.deepHashCode(new Object[] {
            myIntField,
            myStringField,
            myDataField
        });
    }
}
