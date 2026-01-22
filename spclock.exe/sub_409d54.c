// 函数: sub_409d54
// 地址: 0x409d54
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* edx = arg2 - arg1

if (arg2 == arg1)
    return 0

uint32_t ecx_1

while (true)
    ecx_1 = zx.d(*(edx + arg1))
    
    if (ecx_1.b != *arg1)
        break
    
    if (ecx_1.b == 0)
        break
    
    ecx_1 = zx.d(*(edx + arg1 + 1))
    
    if (ecx_1.b == arg1[1] && ecx_1.b != 0)
        ecx_1 = zx.d(*(edx + arg1 + 2))
        
        if (ecx_1.b != arg1[2] || ecx_1.b == 0)
            arg1 = &arg1[1]
        else
            ecx_1 = zx.d(*(edx + arg1 + 3))
            
            if (ecx_1.b != arg1[3])
                arg1 = &arg1[2]
            else
                arg1 = &arg1[4]
                
                if (ecx_1.b == 0)
                label_409dcd:
                    arg1 = &(arg1 - 3)[1]
                else
                    ecx_1 = zx.d(*(edx + arg1))
                    
                    if (ecx_1.b != *arg1)
                        break
                    
                    if (ecx_1.b == 0)
                        break
                    
                    ecx_1 = zx.d(*(edx + arg1 + 1))
                    
                    if (ecx_1.b == arg1[1] && ecx_1.b != 0)
                        ecx_1 = zx.d(*(edx + arg1 + 2))
                        
                        if (ecx_1.b != arg1[2] || ecx_1.b == 0)
                            arg1 = &arg1[1]
                        else
                            ecx_1 = zx.d(*(edx + arg1 + 3))
                            
                            if (ecx_1.b == arg1[3])
                                arg1 = &arg1[4]
                                
                                if (ecx_1.b != 0)
                                    continue
                                
                                goto label_409dcd
                            
                            arg1 = &arg1[2]
    
    arg1 = &arg1[1]
    break

return zx.d(*arg1) - ecx_1
