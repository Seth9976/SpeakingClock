// 函数: sub_4031d0
// 地址: 0x4031d0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_14 = ecx
char* lpsz = arg1

while (true)
    if (*lpsz != 0 && *lpsz u<= 0x20)
        lpsz = CharNextA(lpsz)
        continue
    
    if (*lpsz != 0x22)
        break
    
    if (lpsz[1] != 0x22)
        break
    
    lpsz = &lpsz[2]

void* ebp = nullptr
char* lpsz_2 = lpsz

while (*lpsz u> 0x20)
    if (*lpsz != 0x22)
        PSTR lpsz_4 = CharNextA(lpsz)
        ebp += lpsz_4 - lpsz
        lpsz = lpsz_4
    else
        lpsz = CharNextA(lpsz)
        
        while (*lpsz != 0)
            if (*lpsz == 0x22)
                break
            
            PSTR lpsz_3 = CharNextA(lpsz)
            ebp += lpsz_3 - lpsz
            lpsz = lpsz_3
        
        if (*lpsz != 0)
            lpsz = CharNextA(lpsz)

sub_4052a8(arg2, ebp)
char* lpsz_1 = lpsz_2
char* ebp_1 = *arg2
int32_t esi_1 = 0

while (*lpsz_1 u> 0x20)
    if (*lpsz_1 != 0x22)
        PSTR eax_12 = CharNextA(lpsz_1)
        
        if (eax_12 u> lpsz_1)
            do
                ebp_1[esi_1] = *lpsz_1
                lpsz_1 = &lpsz_1[1]
                esi_1 += 1
            while (eax_12 u> lpsz_1)
    else
        lpsz_1 = CharNextA(lpsz_1)
        
        while (*lpsz_1 != 0)
            if (*lpsz_1 == 0x22)
                break
            
            PSTR eax_9 = CharNextA(lpsz_1)
            
            if (eax_9 u> lpsz_1)
                do
                    ebp_1[esi_1] = *lpsz_1
                    lpsz_1 = &lpsz_1[1]
                    esi_1 += 1
                while (eax_9 u> lpsz_1)
        
        if (*lpsz_1 != 0)
            lpsz_1 = CharNextA(lpsz_1)

return lpsz_1
