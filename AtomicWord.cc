
#include "AtomicWord.h"

bool Ipc::Atomic::Enabled()
{
#if HAVE_ATOMIC_OPS
    return true;
#else
    return !UsingSmp();
#endif
}

