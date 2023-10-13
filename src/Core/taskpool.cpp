#include "taskpool.h"

TaskPool::TaskPool()
{

}

TaskMeta *TaskPool::addTask(const QString &name, Task *task, TaskPriority priority)
{
    m_meta.insert(name, new TaskMeta({name, TASK_IDLE, priority, QDateTime::currentDateTime(), QDateTime::currentDateTime()}));
    m_tasks.insert(name, task);
    return m_meta.value(name);
}

void TaskPool::removeTask(const QString &name)
{
    m_meta.remove(name);
    m_tasks.remove(name);
}
