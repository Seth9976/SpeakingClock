// 函数: sub_48b4e8
// 地址: 0x48b4e8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char var_9 = 0

if (sub_403df4(arg1[1], 0x4529a0) != 0 && sub_48b704(arg1) != 0 && sub_48b854(arg1) == 0
        && ((arg1[7].b & 0x10) == 0 || *(arg1 + 0x49) != 0))
    int32_t __saved_ebp
    int32_t* var_1c_1 = &__saved_ebp
    int32_t (* var_20_1)() = j_sub_4042b4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    arg1[0x18].b = 0
    
    if (*(arg1 + 0x4a) != 0)
        int32_t* var_28_1 = arg1
        sub_476abc(*data_4ac2fc, *(*arg1 + 0x34))
        *(arg1 + 0x4b) = 1
    
    if (*(arg1 + 0x4d) u<= 1 || *(arg1 + 0x61) != 0)
        void* edx_4 = arg1[1]
        arg1[0x14] = *(edx_4 + 0x38)
        arg1[0x15] = *(edx_4 + 0x3c)
        void* eax_32 = arg1[1]
        *(eax_32 + 0x3c) = arg1
        *(eax_32 + 0x38) = *(*arg1 + 0x40)
    else
        arg1[0x16] = GetWindowLongA(sub_48b704(arg1), 0xfffffffc)
        arg1[0x17] = sub_424a14(*(*arg1 + 0x40), arg1)
        SetWindowLongA(sub_48b704(arg1), 0xfffffffc, arg1[0x17])
    
    var_9 = 1
    fsbase->NtTib.ExceptionList = ExceptionList

return zx.d(var_9)
