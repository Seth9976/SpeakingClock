// 函数: sub_463a84
// 地址: 0x463a84
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_14 = ebx
int32_t esi
int32_t var_18 = esi
int64_t* var_10 = nullptr
int32_t edx
int32_t var_8 = edx
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1 == *(*(arg2 - 8) + 0x64) || *(arg1 + 8) != 0 || *(arg1 + 4) != 0)
    (*(**(arg2 - 4) + 0x10))()
    (*(**(arg2 - 4) + 0x10))()
    
    if (*(*(arg2 - 8) + 0x74) == 0)
        int32_t var_c_2 = *(arg1 + 0x20)
    else
        *(arg1 + 0x10)
        int32_t eax_10 = (*(**(arg2 - 8) + 0x28))()
        *(arg2 - 8)
        int32_t var_c_1 = sub_4646c4(eax_10, *(arg1 + 0x20))
    
    (*(**(arg2 - 4) + 0x10))()
    void* var_28_1 = arg2
    void* edx_5 = sub_461e24(arg1, &var_10)
    ebp_1 = sub_463a08(var_10, edx_5)

if (*(arg1 + 8) != 0)
    ebp_1[-1]
    sub_463a84(ebp_1[2])

if (*(arg1 + 0xc) != 0)
    ebp_1[-1]
    sub_463a84(ebp_1[2])

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_1c_1)(int32_t* arg1 @ ebp, int32_t arg2) = sub_463b8b
sub_404b88(&ebp_1[-3])
return &ebp_1[-3]
