// 函数: sub_46cc88
// 地址: 0x46cc88
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t (* ebp)(void* arg1, void* arg2)
int32_t (* var_4)(void* arg1, void* arg2) = ebp
int32_t ebx
int32_t var_18 = ebx
int32_t esi
int32_t var_1c = esi
int32_t edi
int32_t var_20 = edi
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = arg1
int32_t edx
edx.b = 1
int32_t ecx
int32_t* eax_1 = sub_403c38(ecx, edx)
__return_addr = &var_4
var_4 = j_sub_40443c
TEB* fsbase
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_c = sub_45714c(ExceptionList)
void* ebx_1 = ExceptionList->__offset(0x250).d
int32_t eax_7

if (sub_46c248(ebx_1) == 0 || *(ebx_1 + 0x10) s<= var_c)
    eax_7 = 0
else
    eax_7.b = 1

char var_d = eax_7.b

if (var_d != 0)
    var_c = *(ebx_1 + 0x10)
    sub_46c7a0(ebx_1, 0)

int32_t esi_2 = sub_45b7f4(ExceptionList) - 1

if (esi_2 s>= 0)
    int32_t i_2 = esi_2 + 1
    int32_t ebx_2 = 0
    int32_t i
    
    do
        int32_t* eax_13 = sub_45b7b8(ExceptionList, ebx_2)
        sub_419f9c(eax_1, sub_45b7b8(ExceptionList, ebx_2))
        eax_13[0x12]
        eax_13[0x10]
        sub_456e60(eax_13)
        ebx_2 += 1
        i = i_2
        i_2 -= 1
    while (i != 1)

int32_t esi_4 = eax_1[2] - 1

if (esi_4 s>= 0)
    int32_t i_3 = esi_4 + 1
    int32_t ebx_3 = 0
    int32_t i_1
    
    do
        sub_458ac8(sub_41a0f4(eax_1, ebx_3), 0)
        ebx_3 += 1
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

if (var_d != 0)
    sub_46c088(ExceptionList->__offset(0x250).d)

fsbase->NtTib.ExceptionList = ExceptionList
__return_addr = sub_46cd97
return sub_403c68(eax_1)
