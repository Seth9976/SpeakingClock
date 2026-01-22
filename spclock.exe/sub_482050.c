// 函数: sub_482050
// 地址: 0x482050
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* esi
void* var_8 = esi
int32_t* ebp = arg2
int32_t* ebx = arg1

if (ebp == ebx[0xad])
    return 

arg2.b = 1
int32_t* edi_1 = sub_46bf14(ebx)

if (edi_1 != 0 && ebx[0xad] != 0)
    if (sub_45b55c(ebx[0xad], edi_1[0x9a]) == 0)
        goto label_4820c6
    
    ebx, ebp, edi_1 = sub_470d84(edi_1, ebx[0xad])
    esi = ebx[0xad]
    
    if (esi == edi_1[0x9a])
        goto label_4820c6
    
    sub_4819e8(esi)
    (*(*ebx + 0xe4))()
    return 

label_4820c6:

if (ebp != 0)
    sub_457a68(ebp)
    sub_4576f8(ebp, 1)
    
    if (edi_1 != 0 && ebx[0xad] != 0 && edi_1[0x9a] == ebx[0xad])
        esi.w = 0xffb6
        
        if (sub_403e64(ebp, esi) == 0)
            ebx, ebp, edi_1 = sub_470d84(edi_1, ebx)
        else
            ebx, ebp, edi_1 = sub_470d84(edi_1, ebp)

arg1 = ebx[0xad]

if (arg1 != 0)
    sub_4576f8(arg1, 0)

ebx[0xad] = ebp

if (edi_1 != 0 && ebx[0xad] != 0 && edi_1[0x9a] == ebx[0xad])
    sub_45fe84(ebx[0xad])
