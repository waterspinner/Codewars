//use of classes and oop
class Block{

    //assign varibles to elements of the data array
    constructor(data){
      this.width = data[0];
      this.length = data[1];
      this.height = data[2];
    }
    
    getWidth(){
     return this.width; 
    }
    
    getLength(){
    return this.length;  
    }
    
    getHeight(){
      return this.height;
    }
    
    getVolume(){
      return this.length * this.width * this.height;
    }
    
    getSurfaceArea(){
      return 2 * ((this.length * this.width) + (this.width * this.height) + (this.length * this.height));
    }
  
  }
   