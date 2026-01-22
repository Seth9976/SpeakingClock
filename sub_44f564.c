// 函数: sub_44f564
// 地址: 0x44f564
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char var_18 = 0

if (arg2 != 0)
label_44f592:
    int32_t var_14 = 0
    void* const ebp_1 = nullptr
    int32_t ebx_1 = 0
    int32_t edi_2 = sub_44e490(arg1) - 1
    
    if (edi_2 s>= 0)
        int32_t i_3 = edi_2 + 1
        int32_t i
        
        do
            if (*(sub_44e4a0(arg1, ebx_1) + 0x3e) != 0)
                if (sub_44f540(sub_44e4a0(arg1, ebx_1)) == 0)
                    var_14 = ebx_1
                    break
                
                *(sub_44e4a0(arg1, ebx_1) + 0x3e) = 0
                var_18 = 1
            
            ebx_1 += 1
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    int32_t ebx_2 = var_14
    int32_t edi_5 = sub_44e490(arg1) - 1
    
    if (edi_5 s>= ebx_2)
        int32_t i_4 = edi_5 - ebx_2 + 1
        int32_t i_1
        
        do
            if (sub_44f540(sub_44e4a0(arg1, ebx_2)) == 0)
                if (*(sub_44e4a0(arg1, ebx_2) + 0x3e) != 0)
                    if (ebp_1 != 0 && *(ebp_1 + 0x3e) == 0)
                        *(ebp_1 + 0x3e) = 1
                        var_18 = 1
                    
                    ebp_1 = nullptr
                    var_14 = ebx_2
            else
                if (ebp_1 != 0 && *(ebp_1 + 0x3e) != 0)
                    *(ebp_1 + 0x3e) = 0
                    var_18 = 1
                
                ebp_1 = sub_44e4a0(arg1, ebx_2)
            
            ebx_2 += 1
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
    
    int32_t ebx_4 = sub_44e490(arg1) - 1
    
    if (var_14 s<= ebx_4)
        int32_t i_5 = var_14 - ebx_4 - 1
        int32_t i_2
        
        do
            if (*(sub_44e4a0(arg1, ebx_4) + 0x3e) != 0)
                if (sub_44f540(sub_44e4a0(arg1, ebx_4)) == 0)
                    break
                
                *(sub_44e4a0(arg1, ebx_4) + 0x3e) = 0
                var_18 = 1
            
            ebx_4 -= 1
            i_2 = i_5
            i_5 += 1
        while (i_2 != 0xffffffff)
else if ((*(arg1 + 0x1c) & 0x10) == 0 && sub_44f6ec(arg1) != 0)
    goto label_44f592

return zx.d(var_18)
