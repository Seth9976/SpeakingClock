// 函数: sub_404bac
// 地址: 0x404bac
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* ebx = arg1
int32_t i_1 = arg2
int32_t i

do
    void* edx = *ebx
    
    if (edx != 0)
        *ebx = 0
        
        if (*(edx - 8) s>= 1)
            int32_t temp2_1 = *(edx - 8)
            *(edx - 8) -= 1
            
            if (temp2_1 == 1)
                sub_402ec4(edx - 8)
    
    ebx = &ebx[1]
    i = i_1
    i_1 -= 1
while (i != 1)
