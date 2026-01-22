// 函数: sub_4207f4
// 地址: 0x4207f4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t edi
int32_t var_18 = edi
int32_t var_c = *(arg1 + 0x20)
*(arg1 + 0x20) = 0
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx
sub_4229ec(ecx, 0xe)

if (arg2 != 0)
    int32_t ebx_2 = sub_41ae58(arg2) - 1
    
    if (ebx_2 s>= 0)
        int32_t i_1 = ebx_2 + 1
        int32_t esi_1 = 0
        int32_t i
        
        do
            ebp_1[-1]
            sub_421088()
            int32_t* eax_8 = sub_41ae60(arg2, esi_1)
            ebp_1 = sub_4210e0(ebp_1[-1], eax_8)
            ebp_1[-1]
            sub_421090()
            esi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)

ebp_1[-1]
sub_421090()
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_1c_1)(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) = sub_42088d
void* result = ebp_1[-1]
*(result + 0x20) = ebp_1[-2]
return result
