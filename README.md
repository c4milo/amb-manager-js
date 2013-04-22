## ALMA Monitor Bus Manager bindings for Node.js

## Installation
Before using this module please make sure you have installed the following dependencies:

* [Node.js 0.10.x](http://nodejs.org/)
* [npm install node-gyp -g](https://github.com/TooTallNate/node-gyp)
* [ACS-10.2](http://www.eso.org/~almamgr/AlmaAcs/index.html)
* The binded component: https://svn.alma.cl/p2/branches/ALMA-RELEASE-B/ADC/SW/SWTools/StandaloneAmbManager

Additionally, unlike Node.js, the ALMA Common Software is based entirely on [Autotools](http://en.wikipedia.org/wiki/GNU_build_system). So, we need to set up some environment variables in order to compile this module correctly. Don't worry, we've made that work for you. Take this [script](https://github.com/c4milo/amb-manager-js/blob/master/scripts/alma.sh) and copy it to `/etc/profile.d/alma.sh`. The script assumes you have installed the [ACS](http://www.eso.org/~almamgr/AlmaAcs/index.html) under the `/alma` path.

Lastly, we were told to bind https://svn.alma.cl/p2/branches/ALMA-RELEASE-B/ADC/SW/SWTools/StandaloneAmbManager, so you need to make sure you have that component somewher in your linux box. So far, the [`alma.sh`](https://github.com/c4milo/amb-manager-js/blob/master/scripts/alma.sh) assumes you have the AMB Manager component in this path: `~/CURRENTLY_MOD/StandaloneAmbManager`

## API


## Support documentation
* **CONTROL documentation home:** http://almasw.hq.eso.org/almasw/bin/view/CONTROL/WebHome
* **CONTROL design document:** http://almasw.hq.eso.org/almasw/pub/CONTROL/LiveDesignDocuments/COMP-70.35.00.00-004-I-DSN.docx

## License
[![](http://www.gnu.org/graphics/lgplv3-147x51.png)](http://www.gnu.org/copyleft/lesser.html)

