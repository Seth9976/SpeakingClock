// 函数: sub_470eb0
// 地址: 0x470eb0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char var_9 = 0
data_4aba30 += 1

if (arg1[0xa6] == 0)
    if (arg1 == arg2)
        arg1[0x9a] = 0
    else
        arg1[0x9a] = arg2

*(data_4b1ce4 + 0x64) = arg2
*(data_4b1ce4 + 0x68) = arg1
sub_41a290(*(data_4b1ce4 + 0x50))
sub_41a170(*(data_4b1ce4 + 0x50), 0, arg1)

if (sub_403df4(arg1, 0x46a498) == 0)
    *(data_4b1ce4 + 0x6c) = 0
else
    *(data_4b1ce4 + 0x6c) = arg1
    sub_41a290(*(data_4b1ce4 + 0x4c))
    sub_41a170(*(data_4b1ce4 + 0x4c), 0, arg1)

if ((arg2[0x15].b & 0x20) == 0)
    arg2[0x15].w |= 0x20
    int32_t __saved_ebp
    int32_t* var_1c_1 = &__saved_ebp
    int32_t (* var_20_1)(void* arg1, void* arg2) = j_sub_40443c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* eax_19 = *(data_4b1ce4 + 0x78)
    
    if (arg1 == eax_19)
    label_470ff8:
        
        if (arg1[0x9b] == 0)
            arg1[0x9b] = arg1
        
        if (arg1[0x9b] != arg2)
            while (true)
                int32_t esi_1 = arg1[0x9b]
                
                if (esi_1 != 0 && sub_45b55c(esi_1, arg2) == 0)
                    HWND eax_30 = sub_45f888(arg1[0x9b])
                    arg1[0x9b] = *(arg1[0x9b] + 0x30)
                    
                    if (sub_46bc24(eax_30, 0xb01b) != 0)
                        continue
                    
                    sub_4045c8(ExceptionList, var_20_1)
                    goto label_47114c
                
                while (true)
                    if (arg1[0x9b] == arg2)
                        int32_t* i = arg2[0xc]
                        
                        if ((arg2[7].b & 0x10) == 0 && i != 0)
                            do
                                if (sub_403df4(i, 0x469a28) != 0)
                                    (*(*i + 0xdc))()
                                
                                i = i[0xc]
                            while (i != 0)
                        
                        sub_458ac8(arg1, arg2)
                        void* eax_48 = arg1[0xb1]
                        
                        if (eax_48 != 0 && eax_48 != arg2)
                            sub_458ac8(eax_48, 0)
                        
                        break
                    
                    int32_t* esi_2 = arg2
                    
                    while (true)
                        int32_t* ebx_3 = esi_2[0xc]
                        
                        if (ebx_3 == arg1[0x9b])
                            break
                        
                        esi_2 = ebx_3
                    
                    arg1[0x9b] = esi_2
                    
                    if (sub_46bc24(sub_45f888(esi_2), 0xb01a) == 0)
                        sub_4045c8(ExceptionList, var_20_1)
                        goto label_47114c
                
                break
        
        fsbase->NtTib.ExceptionList = ExceptionList
        uint32_t (__stdcall* var_1c_2)(void* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, 
            int32_t arg5) = sub_471134
        arg2[0x15].w &= 0xffdf
        return arg2
    
    char eax_23
    
    if (eax_19 != 0)
        HWND eax_20 = sub_45f888(eax_19)
        *(data_4b1ce4 + 0x78) = 0
        eax_23 = sub_46bc24(eax_20, 0xb001)
    
    if (eax_19 == 0 || eax_23 != 0)
        *(data_4b1ce4 + 0x78) = arg1
        
        if (sub_46bc24(sub_45f888(arg1), 0xb000) != 0)
            goto label_470ff8
        
        sub_4045c8(ExceptionList, var_20_1)
    else
        sub_4045c8(ExceptionList, var_20_1)

label_47114c:
return zx.d(var_9)
