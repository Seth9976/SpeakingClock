// 函数: sub_442904
// 地址: 0x442904
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t esi = sub_42ea34(arg1[0x66])
int32_t edi = sub_42ea4c(arg1[0x66])
int32_t eax_5 = sub_45714c(arg1)
int32_t eax_7 = sub_457190(arg1)

if (arg1[0x6a].b != 0)
label_442963:
    
    if (*(arg1 + 0x1ad) == 0 || esi s<= 0 || edi s<= 0)
        esi = eax_5
        edi = eax_7
    else
        double var_20_1 = fconvert.d(float.t(esi) / float.t(edi))
        int16_t x87control
        
        if (edi s>= esi)
            edi = eax_7
            int32_t eax_10
            int16_t x87control_2
            eax_10, x87control_2 = sub_40337c(x87control, float.t(eax_7) * fconvert.t(var_20_1))
            esi = eax_10
            
            if (esi s> eax_5)
                esi = eax_5
                edi = sub_40337c(x87control_2, float.t(eax_5) / fconvert.t(var_20_1))
        else
            esi = eax_5
            int32_t eax_8
            int16_t x87control_1
            eax_8, x87control_1 = sub_40337c(x87control, float.t(eax_5) / fconvert.t(var_20_1))
            edi = eax_8
            
            if (edi s> eax_7)
                edi = eax_7
                esi = sub_40337c(x87control_1, float.t(eax_7) * fconvert.t(var_20_1))
else if (*(arg1 + 0x1ad) != 0 && (esi s> eax_5 || edi s> eax_7))
    goto label_442963

*arg2 = 0
arg2[1] = 0
arg2[2] = esi
arg2[3] = edi

if (*(arg1 + 0x1a9) == 0)
    return 0

int32_t eax_14 = eax_7 - edi
int32_t dy = eax_14 s>> 1
bool c_1 = unimplemented  {sar eax, 0x1}

if (eax_14 s>> 1 s< 0)
    dy = adc.d(dy, 0, c_1)

int32_t eax_16 = eax_5 - esi
int32_t dx = eax_16 s>> 1
bool c_2 = unimplemented  {sar eax, 0x1}

if (eax_16 s>> 1 s< 0)
    dx = adc.d(dx, 0, c_2)

return OffsetRect(arg2, dx, dy)
