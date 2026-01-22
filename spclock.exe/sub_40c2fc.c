// 函数: sub_40c2fc
// 地址: 0x40c2fc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t edi = 0xffffffff
char eax_1
uint32_t result
void* ebp_1
eax_1, result, ebp_1 = sub_40bd58(arg1, arg2, data_4af824)
char eax_3

if (eax_1 == 0)
    eax_3, result, ebp_1 = sub_40bd58(ebp_1, arg2, 0x40c4e4)

if (eax_1 == 0 && eax_3 == 0)
    char eax_5
    eax_5, result, ebp_1 = sub_40bd58(ebp_1, arg2, data_4af828)
    char eax_7
    
    if (eax_5 == 0)
        eax_7, result, ebp_1 = sub_40bd58(ebp_1, arg2, sub_40c4eb+5)
    
    if (eax_5 != 0 || eax_7 != 0)
        edi = 0xc
else
    edi = 0

if (edi s>= 0)
    sub_40bca0(ebp_1, arg2)

int16_t var_1c
void var_14

if (sub_40bcc4(&var_1c, arg2, ebp_1, &var_14) != 0)
    int16_t var_1a = 0
    int16_t var_18 = 0
    int16_t var_16 = 0
    
    if (sub_40be30(ebp_1, arg2, zx.d(data_4af820)) == 0)
    label_40c42a:
        
        if (edi s< 0)
            char eax_24
            eax_24, result, ebp_1 = sub_40bd58(ebp_1, arg2, data_4af824)
            char eax_26
            
            if (eax_24 == 0)
                eax_26, result, ebp_1 = sub_40bd58(ebp_1, arg2, 0x40c4e4)
            
            if (eax_24 == 0 && eax_26 == 0)
                char eax_28
                eax_28, result, ebp_1 = sub_40bd58(ebp_1, arg2, data_4af828)
                char eax_30
                
                if (eax_28 == 0)
                    eax_30, result, ebp_1 = sub_40bd58(ebp_1, arg2, sub_40c4eb+5)
                
                if (eax_28 != 0 || eax_30 != 0)
                    edi = 0xc
            else
                edi = 0
        
        if (edi s< 0)
            sub_40bca0(ebp_1, arg2)
            return sub_40ac6c(var_18, var_1a, var_1c, arg3, var_16)
        
        if (var_1c != 0 && var_1c u<= 0xc)
            if (var_1c == 0xc)
                var_1c = 0
            
            var_1c += edi.w
            sub_40bca0(ebp_1, arg2)
            return sub_40ac6c(var_18, var_1a, var_1c, arg3, var_16)
    else if (sub_40bcc4(&var_1a, arg2, ebp_1, &var_14) != 0)
        if (sub_40be30(ebp_1, arg2, zx.d(data_4af820)) == 0)
            goto label_40c42a
        
        if (sub_40bcc4(&var_18, arg2, ebp_1, &var_14) != 0)
            if (sub_40be30(ebp_1, arg2, zx.d(data_4af813)) == 0)
                goto label_40c42a
            
            if (sub_40bcc4(&var_16, arg2, ebp_1, &var_14) != 0)
                goto label_40c42a

return result
