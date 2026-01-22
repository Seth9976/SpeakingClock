// 函数: sub_45b340
// 地址: 0x45b340
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t (* ebp)(void* arg1, void* arg2)
int32_t (* var_4)(void* arg1, void* arg2) = ebp
int32_t ebx
int32_t var_14 = ebx
int32_t esi
int32_t var_18 = esi
int32_t edi
int32_t var_1c = edi
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
sub_45714c(ExceptionList)
int32_t ebx_2 = sub_45b7f4(ExceptionList) - 1

if (ebx_2 s>= 0)
    int32_t i_2 = ebx_2 + 1
    int32_t esi_1 = 0
    int32_t i
    
    do
        int32_t* eax_7 = sub_45b7b8(ExceptionList, esi_1)
        
        if (eax_7[1] == ExceptionList->Handler)
            sub_419f9c(eax_1, sub_45b7b8(ExceptionList, esi_1))
            eax_7[0x12]
            eax_7[0x10]
            sub_456e60(eax_7)
        
        esi_1 += 1
        i = i_2
        i_2 -= 1
    while (i != 1)

int32_t ebx_4 = eax_1[2] - 1

if (ebx_4 s>= 0)
    int32_t i_3 = ebx_4 + 1
    int32_t esi_2 = 0
    int32_t i_1
    
    do
        sub_458ac8(sub_41a0f4(eax_1, esi_2), 0)
        esi_2 += 1
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

fsbase->NtTib.ExceptionList = ExceptionList
__return_addr = sub_45b40c
return sub_403c68(eax_1)
