#ifndef PAPA_CALLBACK_H
#define PAPA_CALLBACK_H

typedef void (*callback_t)(void *);
extern void repeat_three_times(callback_t, void *);

#endif
