//
// ALMA - Atacama Large Millimiter Array
// (c) Associated Universities Inc., 2013
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307, USA
//
#include "bindings.h"

namespace AmbManagerJs {
    Persistent<FunctionTemplate> AmbManager::constructor_template;

    void AmbManager::Initialize(Handle<Object> target) {
        Local<FunctionTemplate> t = FunctionTemplate::New(AmbManager::New);

        t->InstanceTemplate()->SetInternalFieldCount(1);

        NODE_SET_PROTOTYPE_METHOD(t, "flush",
                                      AmbManager::Flush);
        NODE_SET_PROTOTYPE_METHOD(t, "reset",
                                      AmbManager::Reset);
        NODE_SET_PROTOTYPE_METHOD(t, "getNumberOfChannels",
                                      AmbManager::GetNumberOfChannels);
        NODE_SET_PROTOTYPE_METHOD(t, "getNodeSerialNumber",
                                      AmbManager::GetNodeSerialNumber);
        NODE_SET_PROTOTYPE_METHOD(t, "getNodesList",
                                      AmbManager::GetNodesList);
        NODE_SET_PROTOTYPE_METHOD(t, "monitor",
                                      AmbManager::Monitor);
        NODE_SET_PROTOTYPE_METHOD(t, "command",
                                      AmbManager::Command);

        constructor_template = Persistent<FunctionTemplate>::New(t);
        constructor_template->SetClassName(String::NewSymbol("AmbManager"));

        target->Set(String::NewSymbol("AmbManager"), constructor_template->GetFunction());
    }

    AmbManager::AmbManager(const Local<String>& antenna_) : ObjectWrap() {
        HandleScope scope;
        String::Utf8Value antenna(name);

        instance = new AmbManagerImpl((const char*) antenna);
    }

    AmbManager::~AmbManager() {
        if (instance != NULL) {
            instance->cleanUp();
        }
    }

    Handle<Value> AmbManager::New(const Arguments& args) {
        HandleScope scope;
        AmbManager *manager = new AmbManager();

        try {
            manager->instance->initialize();
        } catch(const acsErrTypeLifeCycle::LifeCycleExImpl& ex) {
            //emit error with ex.what();
        } catch(...) {
            //emit ThrowException(String::New("Native routine threw unknown exception type"));
        }

        Local<Object> obj = args.This();
        manager->Wrap(obj);

        return scope.Close(obj);
    }

    Handle<Value> AmbManager::Flush(const Arguments& args) {
        HandleScope scope;
        AmbManager *manager = ObjectWrap::Unwrap<AmbManager>(args.This());
        return Undefined();
    }

    Handle<Value> AmbManager::Reset(const Arguments& args) {
        HandleScope scope;
        AmbManager *manager = ObjectWrap::Unwrap<AmbManager>(args.This());
        return Undefined();
    }

    Handle<Value> AmbManager::GetNumberOfChannels(const Arguments& args) {
        HandleScope scope;
        AmbManager *manager = ObjectWrap::Unwrap<AmbManager>(args.This());
        return Undefined();
    }

    Handle<Value> AmbManager::GetNodeSerialNumber(const Arguments& args) {
        HandleScope scope;
        AmbManager *manager = ObjectWrap::Unwrap<AmbManager>(args.This());
        return Undefined();
    }

    Handle<Value> AmbManager::GetNodesList(const Arguments& args) {
        HandleScope scope;
        AmbManager *manager = ObjectWrap::Unwrap<AmbManager>(args.This());
        return Undefined();
    }

    Handle<Value> AmbManager::Monitor(const Arguments& args) {
        HandleScope scope;
        AmbManager *manager = ObjectWrap::Unwrap<AmbManager>(args.This());
        return Undefined();
    }

    Handle<Value> AmbManager::Command(const Arguments& args) {
        HandleScope scope;
        AmbManager *manager = ObjectWrap::Unwrap<AmbManager>(args.This());
        return Undefined();
    }
} //namespace AmbManagerJs
