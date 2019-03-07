/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.exceptions;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.service.*;
import com.google.common.util.concurrent.ListenableFuture;
import java.io.*;
import java.util.*;

@SwiftGenerated
@ThriftService("Raiser")
public interface Raiser {
    @ThriftService("Raiser")
    public interface Async {
        @ThriftMethod(value = "doBland")
        ListenableFuture<Void> doBland();

        @ThriftMethod(value = "doRaise",
                      exception = { 
                          @ThriftException(type=test.fixtures.exceptions.Banal.class, id=1),
                          @ThriftException(type=test.fixtures.exceptions.Fiery.class, id=2),
                          @ThriftException(type=test.fixtures.exceptions.Serious.class, id=3)
                      })
        ListenableFuture<Void> doRaise();

        @ThriftMethod(value = "get200")
        ListenableFuture<String> get200();

        @ThriftMethod(value = "get500",
                      exception = { 
                          @ThriftException(type=test.fixtures.exceptions.Fiery.class, id=1),
                          @ThriftException(type=test.fixtures.exceptions.Banal.class, id=2),
                          @ThriftException(type=test.fixtures.exceptions.Serious.class, id=3)
                      })
        ListenableFuture<String> get500();
    }

    @ThriftMethod(value = "doBland")
    void doBland() throws org.apache.thrift.TException;

    @ThriftMethod(value = "doRaise",
                  exception = { 
                      @ThriftException(type=test.fixtures.exceptions.Banal.class, id=1),
                      @ThriftException(type=test.fixtures.exceptions.Fiery.class, id=2),
                      @ThriftException(type=test.fixtures.exceptions.Serious.class, id=3)
                  })
    void doRaise() throws test.fixtures.exceptions.Banal, test.fixtures.exceptions.Fiery, test.fixtures.exceptions.Serious, org.apache.thrift.TException;

    @ThriftMethod(value = "get200")
    String get200() throws org.apache.thrift.TException;

    @ThriftMethod(value = "get500",
                  exception = { 
                      @ThriftException(type=test.fixtures.exceptions.Fiery.class, id=1),
                      @ThriftException(type=test.fixtures.exceptions.Banal.class, id=2),
                      @ThriftException(type=test.fixtures.exceptions.Serious.class, id=3)
                  })
    String get500() throws test.fixtures.exceptions.Fiery, test.fixtures.exceptions.Banal, test.fixtures.exceptions.Serious, org.apache.thrift.TException;
}
