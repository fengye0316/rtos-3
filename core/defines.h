#ifndef CORE_DEFINES_H
#define CORE_DEFINES_H

#define always_inline __attribute__((always_inline))

#define interrupt_handler __attribute__ ((interrupt("IRQ")))

#define weak_alias(name) __attribute__ ((weak, alias(name)))

#define ctor_function __attribute__ ((constructor))

#define always_unused __attribute__ ((unused))
#define maybe_unused __attribute__ ((unused))

#define array_size(arr) (sizeof(arr) / sizeof((arr)[0]))

#endif /* !CORE_DEFINES_H */
