##############
Neural networks aka deep learning
##############

The first step to understanding neural networks is to be clear about the terms Artificial Intelligence
,Machine learning and Deep learning. **AI** includes practically any techinique that *empowers a machine to
take intelligent decisions without being expicitly programmed*. **Machine learning** resides within AI and
refers specifically to a range of tools that promote *intelligence through learning* . **Deep learning**
happens to be a part of machine learning that exploits *specific tools called* **Neural Networks** to make
it work.

Intution
=====================




Before Deep learning
=====================

Deep learning now constitutes most of machine learning and both advancements and econimic value generated are growing exponentially ,but this was not always the case.Even in the last decade most of the ML community was concerened with several now obsolete techniques such as kNN ,SVM and random forests.But these techinques had
several problems associated with them and nobody could get it to work really well on any problem that mattered in real life.Let me demostrate them through two examples:

 **The feature problem :** Consider that the problem is to classify male and female voice.Going by old Ml techniques the first step would be to find out among the general properties of sound such as frequeny ,amplitude ,bass etc ,one that of differentiates them the most which would be frequency in this case.Such Properties of data are called features in ML.Now ,consider a database of voices of people speaking in different accents ,background noise etc.This causes a lot of confusion as to which features to select.Even in the male category voices of children might sometimes be interpreted as that of females due to the relatively high frequency. **We need to manually select the best features and this is a very hard ,ambiguous process.** The evolution of a separate field of study called **Feature Engineering** exemplifies this headache.


 **The categories problem :** Consider that the problem is to recognize human faces.The traditional Ml method used for  this would be SVM[Support vector machine].It works be separating groups of input features.For instance ,one category might consist of with and without spectacles and another might be with sunglasses and without hair.As the complexity of the dataset increases,you can imagine that **no of categories would increase and prediction accuracy would decrease exponentially with size of the dataset.**As if to add to all that ,the computer cann't see an image like humans can ,it can just process a matrix of numbers[4k ,1080p ,720p etc refer to the size of this matrix].As you can guess ,the primary problem of feature selection exsists in an amplified form here.



Neural Networksg
=======================

Inspired by the brain
----------------------

The first thing that comes to our mind on hearing the term 'Neural' is the connection to the human brain and yes it is true.Deep learning is inspired by the millions of neurons and interconnections in the brain.However in the present scenario , *deep learning is to the human brain as bird flight is to aeroplanes.* Both perform the same function but the method is better.Having said that ,it widely accepted even by godfathers of deep learning that the present methods are far from optimal.Hence ,there is *no guarantee of the analogy holding in the future.* There have been breakthrough developments recently in the field that are largely inspired by neuroscience and the trend is expexted to continue.

Just math
----------

Neural networks are really just a bunch of mathematical equations implemented in code.Theoretically ,it would be possible to implement all neural network computations on paper but thankfully ,we have computers to do it much faster for us.Each aspect of a neural network can be related to a particular field in math

  **Structure of the network and computations :** Linear algebra [Matrices and related operations]

  **Process of learning :** Calculus [Mostly gradients and derivatives]

  **Stochastic nature of predictions :** Probabiility [For instance bayes]

No feature selection
----------------------

Remeber the problem of feature selection ? The main diference between neural networks and old ML techniques is that we don't need to select specific features to input.Instad ,we can input all the data features and the nework decides which ones are really important:

**Visual recognition :** We input all the image pixels.In case of 720p ,it would be 1280 X 720 = 921600 inputs.

**Audio processing:** We can directly input the audio file in time domain or frequency domain

Software 2.0
--------------

Deep learning has been referred to by Andrej Karpathy ,a leading AI researcher as Software 2.0.Accrding to him ,Software 1.0 consists of all the code that was written in langauges such as C++ ,python ,javascrpt etc in which the method has been explicitly specified.Although the structure of the network is written on Software 1.0 languages ,the method is the language of weights and these weights are learnt ,not programmed.