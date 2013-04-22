{
  'targets': [
    {
      'target_name': 'amb_manager',
      'defines': ['_POSIX_THREADS', '_POSIX_THREAD_SAFE_FUNCTIONS', '_REENTRANT', 'ACE_HAS_AIO_CALLS', 'DEBUG', 'CCS_LIGHT', 'POSN_DUMP'],
      'include_dirs': [
        '/home/dev/CURRENTLY_MOD/StandaloneAmbManager/include'
      ],
      'cflags': [ '-Wall', '-Wno-unused-parameter'],
      'cflags_cc': [ '-fcheck-new', '-fexceptions', '-frtti', '-fno-operator-names', '-fpermissive' ],
      'ldflags': [ '-pthread' ],
      'libraries': [ '/home/dev/CURRENTLY_MOD/StandaloneAmbManager/lib/libStandaloneAmbManagerImpl.so'],
      'sources': [
        'src/bindings.cc',
        'src/amb-manager.cc'
      ],
    }
  ]
}
