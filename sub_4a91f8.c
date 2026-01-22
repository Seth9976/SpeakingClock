// 函数: sub_4a91f8
// 地址: 0x4a91f8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp
int32_t* var_8 = &__saved_ebp
int32_t (* var_c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t temp1 = data_4b19c0
data_4b19c0 -= 1

if (temp1 u< 1)
    sub_422ab8()
    sub_4063e0()
    int32_t edx_1
    edx_1.b = 1
    int32_t* edx_2 = sub_40e840(sub_408ac5+0x87, edx_1)
    
    if (edx_2 != 0)
        edx_2 -= 0xffffffd4
    
    sub_406568(&data_4b19b4, edx_2)
    int32_t edx_3
    edx_3.b = 1
    int32_t* eax_3
    int32_t edx_4
    eax_3, edx_4 = sub_418f98(sub_418b24+0x48, edx_3)
    data_4b19c8 = eax_3
    edx_4.b = 1
    int32_t* eax_4
    int32_t edx_5
    eax_4, edx_5 = sub_41a364(sub_417654+0x10c, edx_4)
    data_4b19c4 = eax_4
    edx_5.b = 1
    data_4b19d0 = sub_41a364(sub_417654+0x10c, edx_5)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
