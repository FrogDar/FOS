/**
 * ����һЩ���������Ǹ���tar�ļ�
 *���������������ϵͳ��ȡ��ʹ�á�
 */
#define	INSTALL_START_SECT		0x17000
#define	INSTALL_NR_SECTS		0x800

/**
 *���������ɼ��س���洢������Ӧ����
 *�ں���������ʱ��Ӧ�ñ�����
 *�����ں˿�����ʱʹ�����ǡ�
 */
#define	BOOT_PARAM_ADDR	0x900  /*�����ַ*/
#define	BOOT_PARAM_MAGIC 0xB007 /*ħ����*/
#define	BI_MAG 0
#define	BI_MEM_SIZE	1
#define	BI_KERNEL_FILE 2

#define	MINOR_BOOT			MINOR_hd2c

/*
 * ������־
 */
#define ENABLE_DISK_LOG
#define SET_LOG_SECT_SMAP_AT_STARTUP
#define MEMSET_LOG_SECTS
#define	NR_SECTS_FOR_LOG		NR_DEFAULT_FILE_SECTS
