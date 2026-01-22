// 函数: sub_47be24
// 地址: 0x47be24
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* edi_1 = sub_459d88(arg1, arg2, arg3)
int32_t result = sub_403df4(edi_1, &data_468718)

if (result.b != 0)
    if (arg3.b != 0 || *(arg1[0x1b] + 0x24) != 0xffffffff || *(arg1[0x1b] + 0x24) != edi_1[0x20])
        *(arg1[0x1b] + 0x24) = edi_1[0x20]
        
        if (edi_1[0x20] != 0xffffffff)
            sub_47b920(arg1)
    
    if (arg3.b != 0 || arg1[0x66] == 0)
        sub_47ba50(arg1, edi_1[0x1b])
    
    result = (*(*sub_47b914(arg1) + 0x1c))()
    
    if (result.b != 0 && edi_1[0x17] != 0)
        result = edi_1[0x17]
        
        if (*(result + 0x38) != 0 && edi_1[0x20] s>= 0)
            result = sub_4670ec(*(edi_1[0x17] + 0x38))
            
            if (result s> edi_1[0x20])
                return sub_47bda0(edi_1[0x20], *(edi_1[0x17] + 0x38))

return result
