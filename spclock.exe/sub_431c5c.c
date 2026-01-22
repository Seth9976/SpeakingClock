// 函数: sub_431c5c
// 地址: 0x431c5c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t* ebx = arg1
void* result = ebx[0xa]

if (arg2 != *(result + 0x10))
    if (arg2 != 0 || *(result + 4) != 1)
        sub_430e88(ebx)
        sub_430e98(ebx)
        void var_5c
        __builtin_memcpy(&var_5c, result + 0x18, 0x54)
        void* var_6c_2 = &var_5c
        *(result + 0x10)
        HPALETTE eax_4 = sub_42fd44(*(result + 8), nullptr)
        int32_t* var_6c_3 = &var_4
        int32_t (* var_70_3)() = j_sub_404188
        TEB* fsbase
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        ebx = sub_4312bc(ebx, eax_4, arg2, nullptr, *(result + 0x70), &var_5c)
        fsbase->NtTib.ExceptionList = ExceptionList
    else
        sub_42a41c(*(result + 0x10))
        *(result + 0x10) = 0
    
    void* eax_7 = ebx[0xa]
    ebp_1 = sub_42fc3c(*(eax_7 + 0x14), arg2, eax_7 + 0x18)
    *(ebx + 0x22) = 1
    result = (*(*ebx + 0x10))()

*ebp_1
return result
