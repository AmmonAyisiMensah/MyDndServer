#ifndef TASKPOOL_H
#define TASKPOOL_H

#include "task.h"
#include <QDateTime>

enum PoolState
{
    POOL_IDLE       = 0x0,
    POOL_RUNNING    = 0x1,
    POOL_OVERLOADED = 0x2
};

enum TaskState
{
    TASK_IDLE       = 0X0,
    TASK_RUNNING    = 0X1,
    TASK_STOPPED    = 0X2,
    TASK_ERROR      = 0X3,
    TASK_DONE       = 0X4
};

enum TaskPriority
{
    PRIOR_VERYHIGH  = 0x4,
    PRIOR_HIGH      = 0x3,
    PRIOR_NORMAL    = 0x2,
    PRIOR_LOW       = 0x1,
    PRIOR_VERYLOW   = 0x0
};

struct TaskMeta
{
    QString TaskName;
    TaskState State;
    TaskPriority priority;
    QDateTime StartedAt;
    QDateTime StoppedAt;
};

typedef QHash<QString, Task*> TaskList;

typedef QHash<QString, TaskMeta*> MetaData;


class TaskPool
{
public:
    TaskPool();
    TaskMeta* addTask(const QString &name, Task *task, TaskPriority priority = PRIOR_NORMAL);
    void removeTask(const QString &name);
private:
    MetaData m_meta;
    TaskList m_tasks;
};

#endif // TASKPOOL_H
