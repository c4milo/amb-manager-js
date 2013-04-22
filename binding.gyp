{
  'targets': [
    {
      'target_name': 'amb_manager',
      'defines': ['_POSIX_THREADS', '_POSIX_THREAD_SAFE_FUNCTIONS', '_REENTRANT', 'ACE_HAS_AIO_CALLS', 'DEBUG', 'CCS_LIGHT', 'POSN_DUMP'],
      'cflags': [ '-Wall', '-Wno-unused-parameter'],
      'cflags_cc': [ '-fcheck-new', '-fexceptions', '-frtti', '-fno-operator-names', '-fpermissive' ],
      'ldflags': [ '-pthread' ],
      'include_dirs': [
        '/alma/ACS-10.2/ACSSW/Sources/AMBManager/include'
      ],
      'libraries': [ '/alma/ACS-10.2/ACSSW/lib/libambManagerImpl.so'],
      'sources': [
        'src/bindings.cc',
        'src/amb-manager.cc'
      ],
    }
  ]
}
