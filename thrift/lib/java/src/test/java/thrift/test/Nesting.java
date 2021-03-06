/**
 * Autogenerated by Thrift
 * <p>
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *
 * @generated
 */
package thrift.test;

import com.facebook.thrift.TBase;
import com.facebook.thrift.TBaseHelper;
import com.facebook.thrift.TException;
import com.facebook.thrift.TFieldRequirementType;
import com.facebook.thrift.meta_data.FieldMetaData;
import com.facebook.thrift.meta_data.StructMetaData;
import com.facebook.thrift.protocol.TField;
import com.facebook.thrift.protocol.TProtocol;
import com.facebook.thrift.protocol.TProtocolUtil;
import com.facebook.thrift.protocol.TStruct;
import com.facebook.thrift.protocol.TType;

import java.util.Collections;
import java.util.HashMap;
import java.util.Map;

@SuppressWarnings({"unused", "serial"})
public class Nesting implements TBase, java.io.Serializable, Cloneable, Comparable<Nesting> {
  private static final TStruct STRUCT_DESC = new TStruct("Nesting");
  private static final TField MY_BONK_FIELD_DESC = new TField("my_bonk", TType.STRUCT, (short) 1);
  private static final TField MY_OOE_FIELD_DESC = new TField("my_ooe", TType.STRUCT, (short) 2);

  public Bonk my_bonk;
  public OneOfEach my_ooe;
  public static final int MY_BONK = 1;
  public static final int MY_OOE = 2;
  public static boolean DEFAULT_PRETTY_PRINT = true;

  // isset id assignments

  public static final Map<Integer, FieldMetaData> metaDataMap;

  static {
    Map<Integer, FieldMetaData> tmpMetaDataMap = new HashMap<Integer, FieldMetaData>();
    tmpMetaDataMap.put(MY_BONK, new FieldMetaData("my_bonk", TFieldRequirementType.DEFAULT,
        new StructMetaData(TType.STRUCT, Bonk.class)));
    tmpMetaDataMap.put(MY_OOE, new FieldMetaData("my_ooe", TFieldRequirementType.DEFAULT,
        new StructMetaData(TType.STRUCT, OneOfEach.class)));
    metaDataMap = Collections.unmodifiableMap(tmpMetaDataMap);
  }

  static {
    FieldMetaData.addStructMetaDataMap(Nesting.class, metaDataMap);
  }

  public Nesting() {
  }

  public Nesting(
      Bonk my_bonk,
      OneOfEach my_ooe) {
    this();
    this.my_bonk = my_bonk;
    this.my_ooe = my_ooe;
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public Nesting(Nesting other) {
    if (other.isSetMy_bonk()) {
      this.my_bonk = TBaseHelper.deepCopy(other.my_bonk);
    }
    if (other.isSetMy_ooe()) {
      this.my_ooe = TBaseHelper.deepCopy(other.my_ooe);
    }
  }

  public Nesting deepCopy() {
    return new Nesting(this);
  }

  @Deprecated
  public Nesting clone() {
    return new Nesting(this);
  }

  public Bonk getMy_bonk() {
    return this.my_bonk;
  }

  public Nesting setMy_bonk(Bonk my_bonk) {
    this.my_bonk = my_bonk;
    return this;
  }

  public void unsetMy_bonk() {
    this.my_bonk = null;
  }

  // Returns true if field my_bonk is set (has been assigned a value) and false otherwise
  public boolean isSetMy_bonk() {
    return this.my_bonk != null;
  }

  public void setMy_bonkIsSet(boolean value) {
    if (!value) {
      this.my_bonk = null;
    }
  }

  public OneOfEach getMy_ooe() {
    return this.my_ooe;
  }

  public Nesting setMy_ooe(OneOfEach my_ooe) {
    this.my_ooe = my_ooe;
    return this;
  }

  public void unsetMy_ooe() {
    this.my_ooe = null;
  }

  // Returns true if field my_ooe is set (has been assigned a value) and false otherwise
  public boolean isSetMy_ooe() {
    return this.my_ooe != null;
  }

  public void setMy_ooeIsSet(boolean value) {
    if (!value) {
      this.my_ooe = null;
    }
  }

  public void setFieldValue(int fieldID, Object value) {
    switch (fieldID) {
      case MY_BONK:
        if (value == null) {
          unsetMy_bonk();
        } else {
          setMy_bonk((Bonk) value);
        }
        break;

      case MY_OOE:
        if (value == null) {
          unsetMy_ooe();
        } else {
          setMy_ooe((OneOfEach) value);
        }
        break;

      default:
        throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  public Object getFieldValue(int fieldID) {
    switch (fieldID) {
      case MY_BONK:
        return getMy_bonk();

      case MY_OOE:
        return getMy_ooe();

      default:
        throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  // Returns true if field corresponding to fieldID is set (has been assigned a value) and false otherwise
  public boolean isSet(int fieldID) {
    switch (fieldID) {
      case MY_BONK:
        return isSetMy_bonk();
      case MY_OOE:
        return isSetMy_ooe();
      default:
        throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  @Override
  public boolean equals(Object that) {
    if (that == null) {
      return false;
    }
    if (that instanceof Nesting) {
      return this.equals((Nesting) that);
    }
    return false;
  }

  public boolean equals(Nesting that) {
    if (that == null) {
      return false;
    }
    if (this == that) {
      return true;
    }

    boolean this_present_my_bonk = true && this.isSetMy_bonk();
    boolean that_present_my_bonk = true && that.isSetMy_bonk();
    if (this_present_my_bonk || that_present_my_bonk) {
      if (!(this_present_my_bonk && that_present_my_bonk)) {
        return false;
      }
      if (!TBaseHelper.equalsNobinary(this.my_bonk, that.my_bonk)) {
        return false;
      }
    }

    boolean this_present_my_ooe = true && this.isSetMy_ooe();
    boolean that_present_my_ooe = true && that.isSetMy_ooe();
    if (this_present_my_ooe || that_present_my_ooe) {
      if (!(this_present_my_ooe && that_present_my_ooe)) {
        return false;
      }
      if (!TBaseHelper.equalsNobinary(this.my_ooe, that.my_ooe)) {
        return false;
      }
    }

    return true;
  }

  @Override
  public int hashCode() {
    return 0;
  }

  @Override
  public int compareTo(Nesting other) {
    if (other == null) {
      // See java.lang.Comparable docs
      throw new NullPointerException();
    }

    if (other == this) {
      return 0;
    }
    int lastComparison = 0;

    lastComparison = Boolean.valueOf(isSetMy_bonk()).compareTo(other.isSetMy_bonk());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(my_bonk, other.my_bonk);
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetMy_ooe()).compareTo(other.isSetMy_ooe());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(my_ooe, other.my_ooe);
    if (lastComparison != 0) {
      return lastComparison;
    }
    return 0;
  }

  public void read(TProtocol iprot) throws TException {
    TField field;
    iprot.readStructBegin(metaDataMap);
    while (true) {
      field = iprot.readFieldBegin();
      if (field.type == TType.STOP) {
        break;
      }
      switch (field.id) {
        case MY_BONK:
          if (field.type == TType.STRUCT) {
            this.my_bonk = new Bonk();
            this.my_bonk.read(iprot);
          } else {
            TProtocolUtil.skip(iprot, field.type);
          }
          break;
        case MY_OOE:
          if (field.type == TType.STRUCT) {
            this.my_ooe = new OneOfEach();
            this.my_ooe.read(iprot);
          } else {
            TProtocolUtil.skip(iprot, field.type);
          }
          break;
        default:
          TProtocolUtil.skip(iprot, field.type);
          break;
      }
      iprot.readFieldEnd();
    }
    iprot.readStructEnd();


    // check for required fields of primitive type, which can't be checked in the validate method
    validate();
  }

  public void write(TProtocol oprot) throws TException {
    validate();

    oprot.writeStructBegin(STRUCT_DESC);
    if (this.my_bonk != null) {
      oprot.writeFieldBegin(MY_BONK_FIELD_DESC);
      this.my_bonk.write(oprot);
      oprot.writeFieldEnd();
    }
    if (this.my_ooe != null) {
      oprot.writeFieldBegin(MY_OOE_FIELD_DESC);
      this.my_ooe.write(oprot);
      oprot.writeFieldEnd();
    }
    oprot.writeFieldStop();
    oprot.writeStructEnd();
  }

  @Override
  public String toString() {
    return toString(DEFAULT_PRETTY_PRINT);
  }

  @Override
  public String toString(boolean prettyPrint) {
    return toString(1, prettyPrint);
  }

  @Override
  public String toString(int indent, boolean prettyPrint) {
    String indentStr = prettyPrint ? TBaseHelper.getIndentedString(indent) : "";
    String newLine = prettyPrint ? "\n" : "";
    String space = prettyPrint ? " " : "";
    StringBuilder sb = new StringBuilder("Nesting");
    sb.append(space);
    sb.append("(");
    sb.append(newLine);
    boolean first = true;

    sb.append(indentStr);
    sb.append("my_bonk");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getMy_bonk() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this.getMy_bonk(), indent + 1, prettyPrint));
    }
    first = false;
    if (!first) {
      sb.append("," + newLine);
    }
    sb.append(indentStr);
    sb.append("my_ooe");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getMy_ooe() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this.getMy_ooe(), indent + 1, prettyPrint));
    }
    first = false;
    sb.append(newLine + TBaseHelper.reduceIndent(indentStr));
    sb.append(")");
    return sb.toString();
  }

  public void validate() throws TException {
    // check for required fields
    // check that fields of type enum have valid values
  }

}

