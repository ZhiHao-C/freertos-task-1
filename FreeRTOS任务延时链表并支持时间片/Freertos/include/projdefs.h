#ifndef PROJDEFS_H
#define PROJDEFS_H
//TaskFunction_t����һ������ָ���ˣ���������һ�����ͣ��������Ϳ��Զ���һ��ָ�򷵻�ֵΪvoid������Ϊvoid *���͵�ָ��
typedef void (*TaskFunction_t)( void * );//

#define pdFALSE			( ( BaseType_t ) 0 )
#define pdTRUE			( ( BaseType_t ) 1 )

#define pdPASS			( pdTRUE )
#define pdFAIL			( pdFALSE )


#endif /* PROJDEFS_H */

