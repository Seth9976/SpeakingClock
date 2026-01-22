// 函数: sub_432720
// 地址: 0x432720
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_4326ac(arg1, arg2, 0)
ICONINFO piconinfo

if (arg2 != 0 && GetIconInfo(arg2, &piconinfo) != 0)
    int32_t __saved_ebp
    int32_t* var_3c_2 = &__saved_ebp
    int32_t (* var_40_2)(void* arg1, void* arg2) = j_sub_40443c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void pv
    
    if (GetObjectA(piconinfo.hbmColor, 0x18, &pv) != 0)
        void* eax_5 = arg1[0xa]
        int32_t var_30
        *(eax_5 + 0x10) = var_30
        *(eax_5 + 0x14) = var_30
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t var_3c_3 = 0x4327a4
    DeleteObject(piconinfo.hbmMask)
    return DeleteObject(piconinfo.hbmColor)

return (*(*arg1 + 0x10))()
