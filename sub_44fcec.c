// 函数: sub_44fcec
// 地址: 0x44fcec
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char var_5 = 1
int32_t eax_1 = *(*arg1 + 0x64)

if (eax_1 != 0)
    var_5 = sub_44fcec(arg3)

if (var_5 != 0 && var_5 != 3)
    if (var_5 != 2)
    label_44fdb0:
        
        if (*(*arg1 + 0x39) == 0)
            var_5 = 0
        else
            int32_t __saved_ebp
            int32_t* var_1c_2 = &__saved_ebp
            int32_t (* var_20_1)() = j_sub_404188
            TEB* fsbase
            struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
            fsbase->NtTib.ExceptionList = &ExceptionList
            
            if ((*(*(arg3 - 0xc) + 0x1c) & 0x10) == 0)
                sub_44e9bc(*arg1)
            
            (*(**arg1 + 0x44))()
            
            if (*(arg3 - 4) == 0)
                var_5 = 2
            else if (*arg1 != *(arg3 - 4) && *(*(arg3 - 4) + 0x60) != *(arg3 - 6))
                var_5 = 2
            
            fsbase->NtTib.ExceptionList = ExceptionList
    else if (*(arg3 - 4) == 0 || *(*(arg3 - 4) + 0x60) != *(arg3 - 6))
        *(arg3 - 6)
        void* ecx
        ecx.b = 2
        sub_44f914(*(arg3 - 0xc))
        *(arg3 - 4) = 0
        
        if (*(arg3 - 4) != 0)
            goto label_44fd8d
        
        var_5 = 3
    else
    label_44fd8d:
        *arg1 = sub_44fcdc(*(arg3 - 4), arg2)
        
        if (*arg1 != 0 && *(*arg1 + 0x64) == eax_1)
            if (arg2 == 0)
                var_5 = 1
            
            goto label_44fdb0

return zx.d(var_5)
