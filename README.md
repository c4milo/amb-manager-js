## ALMA Monitor Bus Manager bindings for Node.js

## Prerequisites
* node 0.10.x
* npm install node-gyp -g
* ACS-10.2
* https://svn.alma.cl/p2/branches/ALMA-RELEASE-B/ADC/SW/SWTools/StandaloneAmbManager

Make sure your LD_LIBRARY_PATH env variable, looks more or less like this:

`LD_LIBRARY_PATH=/alma/ACS-10.2/ACSSW/lib:/alma/ACS-10.2/DDS/build/linux/lib:/alma/ACS-10.2/TAO/ACE_wrappers/build/linux/lib:/alma/ACS-10.2/Python/lib:/alma/ACS-10.2/Python/omni/lib:/alma/ACS-10.2/boost/lib:/alma/ACS-10.2/tcltk/lib`

Additionaly, you need to make sure the lib directory of the Alma BUS Manager is also in LD_LIBRARY_PATH. As an example, let's assume you have the StandaloneAmbManager in your home directory:

`~/CURRENTLY_MOD/StandaloneAmbManager`

So, in order to add its lib directory to the `LD_LIBRARY_PATH`, you will have to run the next command:

`export LD_LIBRARY_PATH=~/CURRENTLY_MOD/StandaloneAmbManager/lib:$LD_LIBRARY_PATH`

