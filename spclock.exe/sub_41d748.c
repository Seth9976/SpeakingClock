// 函数: sub_41d748
// 地址: 0x41d748
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_18 = ebx
int32_t esi
int32_t var_1c = esi
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = ExceptionList_2
(*(*data_4b19b4 + 0x14))()
int32_t* var_c = &var_4
int32_t (* var_10)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
int32_t* eax_2
int32_t ecx
int32_t edx_1
eax_2, ecx, edx_1 = sub_41a4bc(data_4b19d0)
int32_t* var_18_1 = &var_4
int32_t (* var_1c_1)(void* arg1, void* arg2) = j_sub_40443c
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (eax_2[2] s<= 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t var_18_5 = 0x41d8ec
    return sub_41a520(data_4b19d0)

edx_1.b = 1
int32_t eax_4
int32_t ecx_1
int32_t edx_2
eax_4, ecx_1, edx_2 = sub_403c38(ecx, edx_1)
int32_t var_8 = eax_4
int32_t* var_18_2 = &var_4
int32_t (* var_1c_2)(void* arg1, void* arg2) = j_sub_40443c
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
edx_2.b = 1
int32_t var_c_1 = sub_403c38(ecx_1, edx_2)
int32_t* var_18_3 = &var_4
int32_t (* var_1c_3)(void* arg1, void* arg2) = j_sub_40443c
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i = 0

while (i s< eax_2[2])
    int32_t* eax_8 = sub_41a0f4(eax_2, i)
    eax_8[4]
    int32_t eax_10
    void* edx_4
    eax_10, edx_4 = sub_419ab0()
    ebp_1[-3] = eax_10
    
    if (ebp_1[-3] == 0)
        int32_t eax_12
        eax_12, edx_4 = sub_4162ec(eax_8[1], eax_8[3])
        
        if (eax_12 == 0)
            int32_t* var_24_3 = ebp_1
            sub_41d700(eax_8[1], edx_4)
            i += 1
            continue
    
    if (ebp_1[-3] != 0)
        if ((*(ebp_1[-3] + 0x1c) & 2) != 0)
            int32_t* var_24_1 = ebp_1
            sub_41d700(eax_8[1], edx_4)
            i += 1
            continue
        else
            int32_t* eax_15
            eax_15, ebp_1 = sub_41d5fc(ebp_1[-3], eax_8[5])
            ebp_1[-4] = eax_15
            ebp_1[-4]
            edx_4 = (**eax_8)()
    
    int32_t* var_24_2 = ebp_1
    sub_41d6c8(eax_8[1], edx_4)
    sub_419fe8(eax_2, i)
    sub_403c68(eax_8)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_18_4)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, 
    int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9) = sub_41d87b
return sub_403c68(ebp_1[-2])
