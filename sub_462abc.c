// 函数: sub_462abc
// 地址: 0x462abc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (*(*(arg1 + 0x14) + 0x10) != 1)
label_462b10:
    
    if (*(*(arg1 + 0x14) + 0x10) != 2)
    label_462b55:
        
        if (*(arg1 + 4) != 0)
            *(arg2 - 4)
            
            if ((*(**(arg2 - 8) + 0x40))(*(arg2 - 0xc)) != 0)
                *(arg2 - 0x10) = arg1
    else
        if (sub_462098(arg1) s< **(arg2 - 4))
            goto label_462b55
        
        if (sub_462098(arg1) - *(*(arg2 - 8) + 0xc) s> **(arg2 - 4))
            goto label_462b55
        
        **(arg2 - 0xc) = 0x12
        *(arg2 - 0x10) = arg1
else
    if (sub_462098(arg1) s< *(*(arg2 - 4) + 4))
        goto label_462b10
    
    if (sub_462098(arg1) - *(*(arg2 - 8) + 0xc) s> *(*(arg2 - 4) + 4))
        goto label_462b10
    
    **(arg2 - 0xc) = 0x12
    *(arg2 - 0x10) = arg1

if (*(arg2 - 0x10) == 0 && sub_462174(arg1) != 0)
    sub_462174(arg1)
    sub_462abc(arg2)

void* result = arg2

if (*(result - 0x10) == 0)
    result = sub_46219c(arg1)
    
    if (result != 0)
        sub_46219c(arg1)
        result = sub_462abc(arg2)

return result
