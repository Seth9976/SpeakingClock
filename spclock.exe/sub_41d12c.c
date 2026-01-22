// 函数: sub_41d12c
// 地址: 0x41d12c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* eax = arg1[3]

if (eax s>= 0 && arg3 s>= 0)
    void* edi_2 = eax + arg3
    
    if (edi_2 s> 0)
        if (edi_2 s> arg1[2])
            if (edi_2 s> arg1[4])
                sub_41d058(arg1, edi_2)
            
            arg1[2] = edi_2
        
        sub_4030d0(arg2, arg1[1] + arg1[3], arg3)
        arg1[3] = edi_2
        return arg3

return nullptr
