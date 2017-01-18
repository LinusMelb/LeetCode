int maxArea(int* height, int heightSize) {
    int i, j, m_a, max_a, l_h;
    l_h = -1;
    for(i=0; i < heightSize; i++){
        
        if(height[i] < l_h){
            continue;
        }else{
            l_h = height[i];
            for(j=heightSize-1; j > i; j--){
            
                if(height[i] > height[j]){
                    m_a = height[j] * (j - i);
                }else{
                    m_a = height[i] * (j - i);
                }
                
                if(m_a > max_a){
                    max_a = m_a;
                }
                
            }
        }
    }
    
    return max_a;
    
}
