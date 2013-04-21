{
  'targets': [
    {
      'target_name': 'amb-manager',
      'defines': ['_POSIX_THREADS', '_POSIX_THREAD_SAFE_FUNCTIONS', '_REENTRANT', 'ACE_HAS_AIO_CALLS', 'DEBUG', 'CCS_LIGHT', 'POSN_DUMP'],
      'include_dirs': [
        '/home/dev/CURRENTLY_MOD/StandaloneAmbManager/include'
      ],
      'cflags': [ '-Wall', '-Wno-unused-parameter'],
      'cflags_cc': [ '-fPIC', '-fcheck-new', '-fexceptions', '-frtti'],
      #'ldflags': [ '-pthread', '-rdynamic' ],
      'sources': [
        'src/bindings.cc',
        'src/amb-manager.cc'
      ],
    }
  ]
}
