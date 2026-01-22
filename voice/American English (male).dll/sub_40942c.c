// 函数: sub_40942c
// 地址: 0x40942c
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

char eax_1
void* ebp_1
int32_t* esi_1
eax_1, ebp_1, esi_1 = sub_408ee0(arg1, arg2, data_414698)
char eax_3

if (eax_1 == 0)
    eax_3, ebp_1, esi_1 = sub_408ee0(ebp_1, esi_1, 0x409610)

int32_t edi_1

if (eax_1 == 0 && eax_3 == 0)
    char eax_5
    eax_5, ebp_1, esi_1 = sub_408ee0(ebp_1, esi_1, data_41469c)
    char eax_7
    
    if (eax_5 == 0)
        eax_7, ebp_1, esi_1, edi_1 = sub_408ee0(ebp_1, esi_1, sub_409617+5)
    
    if (eax_5 != 0 || eax_7 != 0)
        edi_1 = 0xc
else
    edi_1 = 0

if (edi_1 s>= 0)
    sub_408e28(ebp_1, esi_1)

int16_t var_1c
void var_14

if (sub_408e4c(&var_1c, esi_1, ebp_1, &var_14) != 0)
    int16_t var_1a = 0
    int16_t var_18 = 0
    int16_t var_16 = 0
    int32_t* ecx_2
    ecx_2.b = data_414694
    
    if (sub_408f6c(ebp_1, esi_1, ecx_2) == 0)
    label_409557:
        
        if (edi_1 s< 0)
            char eax_24
            eax_24, ecx_2, ebp_1, esi_1 = sub_408ee0(ebp_1, esi_1, data_414698)
            char eax_26
            
            if (eax_24 == 0)
                eax_26, ecx_2, ebp_1, esi_1 = sub_408ee0(ebp_1, esi_1, 0x409610)
            
            if (eax_24 == 0 && eax_26 == 0)
                char eax_28
                eax_28, ecx_2, ebp_1, esi_1 = sub_408ee0(ebp_1, esi_1, data_41469c)
                char eax_30
                
                if (eax_28 == 0)
                    eax_30, ecx_2, ebp_1, esi_1, edi_1 = sub_408ee0(ebp_1, esi_1, sub_409617+5)
                
                if (eax_28 != 0 || eax_30 != 0)
                    edi_1 = 0xc
            else
                edi_1 = 0
        
        if (edi_1 s< 0)
        label_4095d8:
            sub_408e28(ebp_1, esi_1)
            ecx_2.w = var_18
            int32_t* edx_16
            edx_16.w = var_1a
            double* eax_33
            eax_33.w = var_1c
            return sub_407e54(ecx_2.w, edx_16.w, eax_33, arg3, var_16)
        
        if (var_1c != 0 && var_1c u<= 0xc)
            if (var_1c == 0xc)
                var_1c = 0
            
            var_1c += edi_1.w
            goto label_4095d8
    else if (sub_408e4c(&var_1a, esi_1, ebp_1, &var_14) != 0)
        ecx_2.b = data_414694
        
        if (sub_408f6c(ebp_1, esi_1, ecx_2) == 0)
            goto label_409557
        
        if (sub_408e4c(&var_18, esi_1, ebp_1, &var_14) != 0)
            ecx_2.b = data_414687
            
            if (sub_408f6c(ebp_1, esi_1, ecx_2) == 0)
                goto label_409557
            
            if (sub_408e4c(&var_16, esi_1, ebp_1, &var_14) != 0)
                goto label_409557

return nullptr
