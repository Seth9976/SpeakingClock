// 函数: sub_484730
// 地址: 0x484730
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char* edi = arg1
char* esi = arg2
char* edx = arg1

while (true)
    arg1.b = *esi
    esi = &esi[1]
    
    do
        arg1.b = arg1.b
        
        if (arg1.b == 0)
            *edi = arg1.b
            return &edi[1 - 1] - edx
        
        if (arg1.b == 0xa)
            *edi = 0xa0d
            edi = &edi[2]
            break
        
        *edi = arg1.b
        edi = &edi[1]
        
        if (arg1.b != 0xd)
            break
        
        arg1.b = 0xa
        *edi = 0xa
        edi = &edi[1]
        arg1.b = *esi
        esi = &esi[1]
    while (arg1.b != 0xa)
