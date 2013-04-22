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
#ifndef SRC_BINDINGS_H_
#define SRC_BINDINGS_H_

#include <StandaloneAmbManager.h>
#include "amb-manager.h"

using namespace v8;
using namespace node;

namespace AmbManagerJs {
    class AmbManager : public ObjectWrap {
        public:
            static void Initialize(Handle<Object> target);
            AmbManager();
            virtual ~AmbManager();

        protected:
            /**
            * Creates a new JS instance of AmbManager
            */
            static Handle<Value> New(const Arguments& args);

            /**
            * Flushes the specified channel
            */
            static Handle<Value> Flush(const Arguments& args);

            /**
            * Sends a 1.5 ms reset pulse on the reset line for a given channel.
            */
            static Handle<Value> Reset(const Arguments& args);

            /**
            * Returns number of channels defined in the AMB
            */
            static Handle<Value> GetNumberOfChannels(const Arguments& args);

            /**
            * Returns node serial number
            */
            static Handle<Value> GetNodeSerialNumber(const Arguments& args);

            /**
            * Sends a broadcast inquiry and returns all nodes on the
            * specified channel.
            */
            static Handle<Value> GetNodesList(const Arguments& args);

            /**
            * Retrieves monitor data from a
            * specific CAN address and timing event as follows:
            *
            * a) From the next timing event if any TE is specificed
            * b) From the specified timing event if a target TE was specified
            */
            static Handle<Value> Monitor(const Arguments& args);


            /**
            * Sends control commands to a specific node and channel as follows:
            *
            * a) From the next timing event if any TE is specificed
            * b) From the specified timing event if a target TE was specified
            */
            static Handle<Value> Command(const Arguments& args);
        private:
            StandaloneAmbManager* interface;
            static Persistent<FunctionTemplate> constructor_template;
    }; //class definition
} //namespace

#endif  // SRC_BINDINGS_H
