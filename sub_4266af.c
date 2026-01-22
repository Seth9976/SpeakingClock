// 函数: sub_4266af
// 地址: 0x4266af
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg6 -= 1
*arg1 += arg1.b
char temp1 = *(arg6 + 0x65)
*(arg6 + 0x65) += arg1.b
int32_t result
int32_t** esp

if (temp1 == neg.b(arg1.b))
    result = data_4b1a1c()
else
    int32_t eflags
    uint16_t* esi = __outsd(arg2, *arg5, arg5, eflags)
    __outsb(arg2, *esi, esi, eflags)
    int32_t esi_2 = *(arg6 + (arg4 << 1) + 0x72) * 0x6f666e49
    int32_t* var_4_1 = arg6
    *(arg3 * 3 + 0x53) += arg1.b
    char* var_8_1 = arg1
    *(arg4 - 0x75) += arg2.b
    arg1.b = __in_al_dx(arg2, eflags)
    int32_t ebx
    int32_t var_35_1 = ebx
    int32_t var_39_1 = esi_2
    int32_t* var_3d = arg6
    esp = &var_3d
    RECT* lprcSrc2 = arg4[3]
    int32_t* hdc = arg4[2]
    int32_t* hdc_1
    
    if (data_4b1a2f != 0)
        result = 0
        
        if (arg4[4] != 0)
            arg4[-7] = 0
            arg4[-6] = 0
            arg4[-5] = data_4b1a00(0)
            arg4[-4] = data_4b1a00(1)
            
            if (hdc != 0)
                arg4[-3] = GetClipBox(hdc, &arg4[-0xb])
                esp = &var_3d
                
                if (GetDCOrgEx(hdc, &arg4[-2]) != 0)
                    OffsetRect(&arg4[-7], neg.d(arg4[-2]), neg.d(arg4[-1]))
                    
                    if (IntersectRect(&arg4[-7], &arg4[-7], &arg4[-0xb]) != 0 && lprcSrc2 == 0)
                        goto label_4267c1
                    
                    esp = &var_3d
                    
                    if (IntersectRect(&arg4[-7], &arg4[-7], lprcSrc2) != 0)
                        goto label_4267c1
                    
                    if (arg4[-3] == 1)
                        result.b = 1
            else if (lprcSrc2 == 0)
            label_4267c1:
                int32_t eax_25 = arg4[5]
                hdc_1 = 0x12340042
                esp = &var_3d
                result = arg4[4](hdc_1, hdc, &arg4[-7], eax_25)
            else
                esp = &var_3d
                
                if (IntersectRect(&arg4[-7], &arg4[-7], lprcSrc2) != 0)
                    goto label_4267c1
                
                result.b = 1
    else
        arg1.b = 7
        struct _EXCEPTION_REGISTRATION_RECORD** eax
        int32_t edi
        eax, arg4, edi = sub_426124(arg1.b, data_4b1a1c, "EnumDisplayMonitors")
        data_4b1a1c = eax
        int32_t var_41_1 = arg4[5]
        int32_t var_45_1 = arg4[4]
        int32_t var_49_1 = edi
        hdc_1 = hdc
        esp = &hdc_1
        result = data_4b1a1c()

*esp
esp[1]
esp[2]
*arg4
return result
