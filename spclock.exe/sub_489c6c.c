// 函数: sub_489c6c
// 地址: 0x489c6c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* var_1c = arg1

if (arg2 == 0 || (*(*arg2 + 0x1c))(var_1c, arg2).b != 0 || *(var_1c + 0x68) == 0x1fffffff)
    return 

int32_t* eax_2 = sub_430bec(arg2)

if (arg3 != 0)
    arg1 = (*(*arg2 + 0x2c))()
    
    if (arg1 s>= 0)
        void* i_3 = arg1 + 1
        int32_t edi_2 = 0
        void* i
        
        do
            arg1 = (*(*arg2 + 0x20))()
            
            if (arg1 s>= 0)
                void* j_3 = arg1 + 1
                int32_t ebx_2 = 0
                void* j
                
                do
                    arg1 = edi_2 & 0x80000001
                    
                    if (arg1 s< 0)
                        arg1 = ((arg1 - 1) | 0xfffffffe) + 1
                    
                    arg1.b = arg1 == 0
                    int32_t edx_7 = ebx_2 & 0x80000001
                    
                    if (edx_7 s< 0)
                        edx_7 = ((edx_7 - 1) | 0xfffffffe) + 1
                    
                    edx_7.b = edx_7 == 0
                    arg1.b ^= edx_7.b
                    
                    if (arg1.b != 0)
                        sub_42c6cc(ebx_2, edi_2, eax_2, *(var_1c + 0x68))
                    
                    ebx_2 += 1
                    j = j_3
                    j_3 -= 1
                while (j != 1)
            
            edi_2 += 1
            i = i_3
            i_3 -= 1
        while (i != 1)
else
    arg1 = (*(*arg2 + 0x2c))()
    
    if (arg1 s>= 0)
        void* i_2 = arg1 + 1
        int32_t edi_1 = 0
        void* i_1
        
        do
            arg1 = (*(*arg2 + 0x20))()
            
            if (arg1 s>= 0)
                void* j_2 = arg1 + 1
                int32_t ebx_1 = 0
                void* j_1
                
                do
                    int32_t eax_6 = edi_1 & 0x80000001
                    
                    if (eax_6 s< 0)
                        eax_6 = ((eax_6 - 1) | 0xfffffffe) + 1
                    
                    if (eax_6 != 0)
                        arg1 = ebx_1 & 0x80000001
                        
                        if (arg1 s< 0)
                            arg1 = ((arg1 - 1) | 0xfffffffe) + 1
                    
                    if (eax_6 == 0 || arg1 == 0)
                        sub_42c6cc(ebx_1, edi_1, eax_2, *(var_1c + 0x68))
                    
                    ebx_1 += 1
                    j_1 = j_2
                    j_2 -= 1
                while (j_1 != 1)
            
            edi_1 += 1
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
