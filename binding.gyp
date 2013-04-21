{
  'targets': [
    {
      'target_name': 'amb-manager',
      'include_dirs': [
        '/home/dev/CURRENTLY_MOD/StandaloneAmbManager/include',
        '/alma/ACS-current/Python/include/python2.6/',
        '/alma/ACS-10.2/TAO/ACE_wrappers/TAO/tao',
        '/alma/ACS-10.2/TAO/ACE_wrappers/TAO/tao/AnyTypeCode',
        '/alma/ACS-10.2/TAO/ACE_wrappers/ace',
        '/alma/ACS-10.2/ACSSW/include'],
      'sources': [
        'src/bindings.cc',
        'src/amb-manager.cc'
      ],
    }
  ]
}
