#ifndef CONDITION_IMPL_H#define CONDITION_IMPL_H#include <windows.h>class ConditionImpl {public:	ConditionImpl(int& var);	~ConditionImpl(void);	void waitAndRetain(int value);	void release(void);	void signal(void);	private:	int& m_conditionnedVar;	HANDLE m_cond;	sf::Mutex m_mutex;};#endif