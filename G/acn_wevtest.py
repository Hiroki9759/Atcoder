import sys
import pandas as pd
from sklearn.preprocessing import MinMaxScaler

def main(argv):
    # このコードは引数と標準出力を用いたサンプルコードです。
    # このコードは好きなように編集・削除してもらって構いません。
    # ---
    # This is a sample code to use arguments and outputs.
    # Edit and remove this code as you like.
    
    # sales=np.array(df['sales'])
    if(argv[0]=='step1'):
        df=pd.read_csv(argv[1])
        df['sales'].fillna(df['sales'].mean()) 
        df['temperature'].fillna(df['temperature'].mean()) 
        df['THI'].fillna(df['THI'].mean()) 
        df['num_staff'].fillna(df['num_staff'].mean()) 
        df['weather'].fillna(1)
        print(df['sales'].mean(), df['sales'].var(), df['sales'].min(), df['sales'].max())
        print(df['temperature'].mean(), df['temperature'].var(), df['temperature'].min(), df['temperature'].max())
        print(df['THI'].mean(),df['THI'].var(),df['THI'].min(),df['THI'].max())
        print(df['num_staff'].mean(), df['num_staff'].var(),df['num_staff'].min(),df['num_staff'].max())
    if(argv[0]=='step2'):
        df=pd.read_csv(argv[1])
        df['sales']=df['sales'].fillna(df['sales'].mean()) 
        df['temperature']=df['temperature'].fillna(df['temperature'].mean()) 
        df['THI']=df['THI'].fillna(df['THI'].mean()) 
        df['num_staff']=df['num_staff'].fillna(df['num_staff'].mean()) 
        df['weather']=df['weather'].fillna(1)
        df['temperature']=(df['temperature']-df['temperature'].min())/(df['temperature'].max()-df['temperature'].min())
        df['THI']=(df['THI']-df['THI'].min())/(df['THI'].max()-df['THI'].min())
        df['num_staff']=(df['num_staff']-df['num_staff'].min())/(df['num_staff'].max()-df['num_staff'].min())
        for i in range (len(df)):
            print(df.values[i][0],df.values[i][1],df.values[i][2],df.values[i][3],df.values[i][4],df.values[i][5])
    if(argv[0]=='step3'):
        df=pd.read_csv(argv[1])
        df_=pd.read_csv(argv[2])
        df_['sales']=df_['sales'].fillna(df_['sales'].mean()) 
        df_['temperature']=df_['temperature'].fillna(df_['temperature'].mean()) 
        df_['THI']=df['THI'].fillna(df_['THI'].mean()) 
        df_['num_staff']=df_['num_staff'].fillna(df_['num_staff'].mean()) 
        df_['weather']=df_['weather'].fillna(1)
        df['sales']=df['sales'].fillna(df['sales'].mean()) 
        df['temperature']=df['temperature'].fillna(df['temperature'].mean()) 
        df['THI']=df['THI'].fillna(df['THI'].mean()) 
        df['num_staff']=df['num_staff'].fillna(df['num_staff'].mean()) 
        df['weather']=df['weather'].fillna(1)
        df['temperature']=(df['temperature']-df['temperature'].min())/(df['temperature'].max()-df['temperature'].min())
        df['THI']=(df['THI']-df['THI'].min())/(df['THI'].max()-df['THI'].min())
        df['num_staff']=(df['num_staff']-df['num_staff'].min())/(df['num_staff'].max()-df['num_staff'].min())
        df1=pd.get_dummies(df['weather'],columns=['weather'])
        df2=pd.concat([df, df1], axis=1)
        df2=df2.drop('weather',axis=1)
        df2=df2.drop('date',axis=1)

        df2_val= df2.values
        df2_valT=df2_val.T
        aat=numpy.linalg.inv(np.dot(df2_val,df2_valT))

        print(df2)



    

    
if __name__ == '__main__':
    main(sys.argv[1:])
