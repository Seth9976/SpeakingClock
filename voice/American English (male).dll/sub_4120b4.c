// 函数: sub_4120b4
// 地址: 0x4120b4
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t __saved_ebp
int32_t* var_8 = &__saved_ebp
int32_t (* var_c)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t temp1 = data_414850
data_414850 -= 1

if (temp1 u< 1)
    sub_411f44()
    sub_404de4()
    int32_t edx_1
    edx_1.b = 1
    int32_t* edx_2 = sub_40b3e0(sub_4067b4+0x88, edx_1)
    
    if (edx_2 != 0)
        edx_2 -= 0xffffffd4
    
    sub_404f68(&data_414848, edx_2)
    int32_t edx_3
    edx_3.b = 1
    int32_t* eax_3
    int32_t edx_4
    eax_3, edx_4 = sub_40f774(sub_40f441+0x1a7, edx_3)
    data_414858 = eax_3
    edx_4.b = 1
    int32_t* eax_4
    int32_t edx_5
    eax_4, edx_5 = sub_40fb60(0x40f0c0, edx_4)
    data_414854 = eax_4
    edx_5.b = 1
    data_414860 = sub_40fb60(0x40f0c0, edx_5)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
